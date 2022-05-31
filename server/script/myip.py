from requests import get

ip = get('https://api.ipify.org').content.decode('utf8')
print('My public IP address is: {}'.format(ip))
with open('./conf/myip.txt', 'w') as f:
    f.write(format(ip))