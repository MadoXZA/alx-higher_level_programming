#!/usr/bin/python3
"""
Python script that takes a URL and a email address,
sends a POST request to the passed URL with the email,
and displays the body of the response
"""
import requests
import sys


if __name__ == "__main__":
    r = requests.post(sys.argv[1], data={'email': sys.argv[2]})
    print(r.text)
