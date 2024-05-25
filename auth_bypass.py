import requests

# r = requests.get('https://github.com/login', auth=('admin', 'admin'))

# r = requests.post("https://github.com/login", auth=('admin', 'admin'))

payload = {"": "'1=1-+"}

# r = requests.post('https://httpbin.org/post', data={'key': 'value'})

r = requests.post('https://www.puretaboo.com/en/login', params=payload)

status_code_result = r.status_code
print(status_code_result)

print(r.url)

# system.out.println()
