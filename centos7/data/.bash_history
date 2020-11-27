who am i
pwd
ls
touch test
ls
pwd
ls
who am i
su - root
systemctl
systemctl get-default
systemctl set-default graphical.target
yum update
yum groupinstall "GNOME Desktop" "X Window System" "Desktop" 
yum install tigervnc-server tigervnc vnc vnc-server -y
cp /lib/systemd/system/vncserver@.service /etc/systemd/system/vncserver@:1.service
vim /etc/systemd/system/vncserver@:1.service
vim /etc/libvirt/qemu.conf 
systemctl daemon-reload
vncserver
