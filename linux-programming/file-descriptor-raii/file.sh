#!/bin/bash

WORKERS=100        # increase to 1000 for real stress
ROUNDS=50          # how many times each worker runs
LOGDIR=logs

rm -rf "$LOGDIR"
mkdir -p "$LOGDIR"

run_worker() {
    id=$1
    for ((i=1;i<=ROUNDS;i++)); do
        (
            exec </dev/null
            exec >"$LOGDIR/w${id}_r${i}.out"
            exec 2>"$LOGDIR/w${id}_r${i}.err"

            ./raii "$id" "$i"
        )
    done
}

echo "Launching $WORKERS async workers × $ROUNDS rounds..."

for ((i=1;i<=WORKERS;i++)); do
    run_worker $i &
done

wait

echo "Race test finished."
