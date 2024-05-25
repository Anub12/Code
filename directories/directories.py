import requests


def request(url):
    try:
        return requests.get("https://" + url)
    except requests.exceptions.ConnectionError:
        pass


target_url = input("[*] Enter Target Url: ")

file = open("directories/common.txt", "r")
for line in file:
    print("trying keyword: " + line)
    word = line.strip()
    full_url = target_url + "/" + word
    response = request(full_url)
    if response:
        print("[+] Discovered Directory At This Link: " + full_url)
