#!/bin/bash

nodelist="nodo1"
statedir=$HOME/munge-files

for node in $nodelist; do
    ssh $node "sudo date --set=$(date --iso-8601=seconds)"
    ssh $node "mkdir -p $statedir/var"
    ssh $node "mkdir -p $statedir/lib/munge"
    ssh $node "mkdir -p $statedir/log/munge"
    ssh $node "mkdir -p $statedir/run/munge"
done