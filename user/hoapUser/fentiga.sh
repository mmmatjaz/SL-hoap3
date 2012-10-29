#!/bin/bash
ps aux | grep xh

echo "Enter PID"

read pid

kill $pid
