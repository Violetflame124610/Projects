# About Pi-Hole
Pi-hole is a network-wide ad blocker and DNS sinkhole that filters unwanted content, like ads and trackers, for all devices on your network by intercepting and 
blocking requests to known advertising domains before they reach your devices. It runs on low-power hardware, like a Raspberry Pi, and works by becoming the 
DNS server for your network, offering protection across smart TVs, phones, and computers without needing individual app installations.

## Seting up a Pi-Hole server

### Installation
To start with seting it up make sure your raspberry pi is set up properly, open terminal in your rpi and enter the following command

```bash
curl -sSL https://install.pi-hole.net | bash
```

Wait for it to install,After u enter the command a window will pop up in the terminal,Something like this ↓
<img width="1628" height="837" alt="image" src="https://github.com/user-attachments/assets/4ba66102-aa1d-499d-802a-ab312dfc528e" />

click okay.

Now next page will load something like this ↓
<img width="1617" height="830" alt="image" src="https://github.com/user-attachments/assets/6989bb7f-c471-44b7-840d-6af29776b5ac" />

click countinue

Next page will load something like this ↓
<img width="1623" height="828" alt="image" src="https://github.com/user-attachments/assets/710fde81-bf3a-4bac-984e-4f34e435957c" />
eth0 basically means its a wired connection to the network 
while wlan means its a wireless network
so, if u want to connect to your pi-hole dashboard wirelessly click wlan or if u wannt to connect a ethernet and then us the dashboard click eth0

Next page will load something like this ↓
<img width="1622" height="828" alt="image" src="https://github.com/user-attachments/assets/e47a46d2-3c21-4649-8181-47c7c0ae1c48" />
click cloudflare for upstream dns provider

### Blocklists

Next page will load something like this ↓
<img width="1605" height="824" alt="image" src="https://github.com/user-attachments/assets/20f0753f-0361-4e7f-90be-7c761ab61210" />
Click yes if u want a list of ads to be blocked.

next, enable query login

### Accessing Dashboard
The final page loads something like the given below ↓
<img width="1607" height="826" alt="image" src="https://github.com/user-attachments/assets/ac761681-7e3e-4e92-9c46-73a268423f09" />
It contains the link and password to access your dashboard, mark down the link and password then click ok.

now, go to any browser and attach the link there and then enter the password there.

### changing the password 
To change the password for your pi-hole dashboard to access it much easily, u can run the follwoing command in the raspberry pi's terminal

```bash
sudo su
pihole setpassword
```

### set ur dns as the raspberry pi's ip
in order to make pi-hole work operate completely, u must set your dns as your raspberry pi's ip in your network settings.
