#!/bin/bash
docker build -t repairbox:sir .
docker build -t repairbox:sir-grep grep
docker build -t repairbox:sir-grep-v1-f1 example-fault
