from requests import get

ip = get('https://api.ipify.org').content.decode('utf8')
print('My public IP address is: {}'.format(ip))
with open('conf/myport.txt', 'w') as f:
    f.write('tcp://{}:5555'.format(ip))