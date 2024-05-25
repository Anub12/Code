# Import the necessary packages!
import socket as s

# get my hostname
my_hostname = s.gethostname()
# display my hostname
print('Your Hostname is; ' + my_hostname)

# get my IP
my_ip = s.gethostbyname(my_hostname)
# display my IP
print('Your IP Address is: ' + my_ip)

# set the hostname
host = input("Enter Website: ")
# fetch the IP
ip = s.gethostbyname(host)

# display the IP
print('The IP Address of ' + host + ' is: ' + ip)
