#To check the validity of ip address

import sys
import textwrap

def valid(ip):

   if ip.count('.')!=3:
       print("Invalid")
       sys.exit(0)
   ipl=[]
   ipl=ip.split('.')
   for i in ipl:
       if not i.isdigit():
           print("Invalid")
           sys.exit(0)
       if int(i)>255:
           print("Invalid")
           sys.exit(0)

   else:
       print("Valid")


#To calculate bit mask

inp=raw_input("Enter the ip address\n")
li=inp.split('/')
ipv=li[0]
valid(li[0])
n=int(li[1])
h=32-int(li[1])
mask= '1'* n + '0'*h
maskd= '.'.join(str(int(i,2)) for i in textwrap.wrap(mask, 8))
print "Mask : ", maskd

maskd_list= maskd.split('.')
ipv_list=ipv.split('.')

#To calculate network id
k=0
net_id=[]
for i in range(0,4):
   net_id.append(str(int(maskd_list[k]) & int(ipv_list[k])))
   k+=1

print "Network id : " , '.'.join(net_id)

#To calculate brodcast address
zoo=[]
for i in net_id:
   zoo.append("{0:08b}".format(int(i)))

zoos = ''.join(zoo)
broad=[]

for i in textwrap.wrap(zoos[:n] + str(int(zoos[n:],2) | int( '1'* h)), 8):
   broad.append(str(int(i,2)))

print('Broadcast address : ', '.'.join(broad))

#To calculate no. of subnets
print "Number of subnets", 2 ** (n)

#To calculate nu. of hosts
print "Number of hosts", (2 ** (32-n)) - 2


#To print first address
print "First address : " +  '.'.join(net_id[:3])+ '.' + str(int(net_id[3]) + 1)

#To print last address
print "Last address : "  + '.'.join(broad[:3]) + '.' + str(int(broad[3]) - 1)


