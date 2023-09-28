#!/bin/bash
# A Bash script that takes in a URL, sends a request and displays the body size of the response
curl -sI "$1" | grep "Content-Length:" | cut -d " " -f 2
