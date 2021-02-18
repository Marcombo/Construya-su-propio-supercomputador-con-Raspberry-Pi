#!/bin/bash

nodelist="nodo1 nodo2 nodo3"
for node in $nodelist; do
    ssh $node "$@"
done