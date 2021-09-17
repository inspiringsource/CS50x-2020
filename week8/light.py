import os
import requests
import time

from requests.api import request

USERNAME = os.getemv("USERNAME")

IP=os.getenv("IP")

URL="http://{IP}/api/{USERNAME}/lights/1/state"

#requests.put(URL, json={"on": False})  
#True

#blinking effect:
while True:
    requests.put(URL, json={"bri": 254, "on": True})
    time.sleep(1)
    request.put(URL, json={"on": False})
    time.sleep(1)