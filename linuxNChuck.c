EP1
Linux -> OS kernel that interacts with hardware

pwd -> print working directory
ls -> list
cd -> change directory
cd .. -> parent directory
/ -> root directory


EP2
whoami -> user name
cat -> concatenate
cp -> copy
rm -> remove
adduser -> adding users
which -> shows command binary location

Root dirs:
bin -> command binaries
sbin -> admin commands binaries 
usr ->
usr/bin -> command binaries
usr/sbin -> command binaries
usr/local -> custom commands
usr/lib -> libraries of command binaries
boot -> boot files
var -> log files 
tmp -> temporary files
lib -> libraries files system need to boot
home -> users home directories
root -> root user home directory
dev -> binary files of devices
etc -> configuration files
etc/network/interfaces -> network interfaces
media -> mounted drives
mnt -> manual mounted drives

EP3
Terminal -> physical device for interacting with shell
Terminal emulator -> Emulates real terminal
Shell -> user interface for interacting with computer
Bash -> Bourne-Again-Shell
$ -> Logged in as a user
# -> Logged in as root

ps -> Process status - lists processes
id -> Informations about logged user
hostname -> prints hostname
uname -> usefull with flags
ifconfig -> network settings
ip -> more network
netstat -> network status
ss -> session stuff
who -> who else is logged 
env -> environment variables
lsblk -> list blocks - hard drives
lsusb -> usb devices
lsof -> lists open files

man -> manual of the command
-h / --help -> short help of command
apropos -> searching commands by keywors

EP4
User managment

adduser [username]-> adding user
useradd -> adding user (lazy command)
userdel -> deletes user
passwd [user] -> setting / changing password
usermod [username] --shell /bin/bash -> changes default shell of user to bash
usermod -l [newUsername] [oldUsername] -> changing username
sudo -> super user do
su - [user] -> switch user
visudo -> safe way to mod sudoers file

Groups
groupadd [groupName] -> adds group
groups -> shows in wich groups user is
usermod -aG [group] [user] -> adds user to group
gpasswd -d [user] [group] -> removes user from the group
groupdel [group] -> deletes group

cat etc/group -> shows all groups

cat /etc/passwd -> show all users
[username]:[x(paddword in shadow file)][userID][groupID]...[homeDir][defaultShell]

cat /etc/shadow -> show shadow file - hashed passwords
/etc/sudoers -> users that can use sudo
thanos ALL = ALL (add this line below root)

EP5
Managing packages

Packages -> programs in linux
Package managers -> dpkg, apt
Repository -> collection of software

dpkg -i [file] -> install package
apt update -> updates repositories
apt install -> install program from repository
apt edit-sources -> list of repositories
apt list -> lists all packages
apt list --installed -> lists installed packages
apt show [package] -> package description
apt search [package] -> search for package in repositories

apt remove -> removes software without user data
apt purge -> removes software with user data
apt upgrade -> updates packages
apt full-upgrade -> updates packages with removes old ones

dpkg -l -> installed packages 

git clone [url] -> cloning repository from github
pip3 install -r requirements.txt -> installs python libraries from requirements.txt

EP6
Linux services
Process -> Instance of running program 
Interactive process -> process that we started
Deamon -> Background process 
systemd -> initialize and manages deamons
systemctl -> command for controlling daemons
units -> daemons
journalctl -> systemd logs 

Booting:
Boot -> Kernel -> systemd (mounting drives, starting services)

ps -aux -> shows processes
pstree -> processes tree

systemctl stop [daemon] -> stops service
systemctl status [daemon] -> status of deamon
systemctl start [daemon] -> starts deamon
systemctl restart [deamon] -> restarts deamon
systemctl reload [deamon] -> reload configuration of reload
systemctl reload-or-restart [deamon] -> reloads or when it cant restarts deamon
systemctl disable [deamon] -> unit dont start automaticaly during boot
systemctl enable [deamon] -> unit starts automatycaly during boot 
systemctl is-active [daemon] -> checks if unit is running
systemctl is-enabled [daemon] -> checks if unit is enables

systemctl list-units -> lists units loaded to memory
systemctl list-unit-files -> lists ALL units

EP7
Managing processes

Foreground process -> runs in terminal 
Background process -> (add & at the end of the command) runs in terminal too, cant touch it

ps -> Running processes
ps -u [user] -> Running processes of specific user
grep -> filtering with regular expression
kill [ID] -> killing process
pgrep -> ps command combined with grep returning process id
ps -aux -> processes of all users without executed with this terminal with showing owner of the process

ctrl+C -> killing process

ctrl+Z -> stopping process
jobs -> stopped processes
bg [ID] -> put process to background
fg [ID] -> put process to foreground

kill -l -> lists killing signals
15 SIGTERM -> default kill signal (soft)
19 SIGSTOP -> stopping process (ctrl+z)
2 SIGINT -> ctrl+c
9 SIGKILL -> hard one

pkill -> kill combined with grep command

EP8
Web things

python3 -m http.server [port] -> serves web server
php -S 127.0.0.1:[port] -> serves web server
npx http-server -p [port] -> server web server

curl [url] -> showing html code of website
curl -o [fileName] [url] -> downloads website to fileName
curl -I [url] -> shows response header
curl -v [url] -> showing many things (request header, response header, website code)
wget [url] -> downloads code of the page

EP9
Terminal hacks

cd - -> prev dir (checks $OLDPWD)
ls -l -> ls as the list (ll shortcut)
ls -al -> ls as the list including hidden files (la shortcut)

ctrl+a -> jump to begining 
ctrl+e -> jump to end
ctrl+u -> erase command (before cursor)
ctrl+k -> erase command after cursor
ctrl+y -> returns erased command 

alt+backspace -> removes currrent word
ctrl+xe -> edits command with editor

less -> showing big files
sudo !! -> prev command with sudo
tail -> cat 10 last lines
tail -f -> show 10 last lines LIFE

ctrl+r -> searchign last commands