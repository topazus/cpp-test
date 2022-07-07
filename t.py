import json
import requests
import pprint

repo=['bazelbuild/bazel',]
url=f'https://api.github.com/repos/{repo}/releases/latest'

response = requests.get(url)
api_json=response.json()

# write json-encoded data to a file
with open('bazel-api.json','w') as f:
    json.dump(api_json,f,indent=4)

# latest_version=api_json['name']
latest_version=api_json['tag_name']

print(latest_version)

# items():

# Return a new view of the dictionary’s items ((key, value) pairs).
for key, value in api_json.items():
    print(key)
