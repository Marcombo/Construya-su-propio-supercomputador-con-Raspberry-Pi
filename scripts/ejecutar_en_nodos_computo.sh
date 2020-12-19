#!/bin/bash

nodelist="nodo1"
for node in $nodelist; do
    ssh $node "$@"
done