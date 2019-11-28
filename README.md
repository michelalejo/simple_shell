#  NAME

**simple_shell,**  **is a command line interpreter that takes an input in form of commands, processes it, and then gives an output.


# SYNOPSIS

**./shell**

# DESCRIPTION

When you run the shell ./shell on the terminal, the shell issues a command prompt (cisfun$), where you can type your input and is goint to be executed when you hit Enter. The output or the result that you asked for, will be displayed on the terminal.

![enter image description here](https://docs.google.com/uc?id=1FBD7o5aojFVHj2Ds5ibP8vC39eIMcVnV)

# EXAMPLE

**simple_shell,** Is a command line interpreter _E.x:_  
**non-interactive mode:**  
$ gcc -Wall -Werror -Wextra -pedantic *.c -o ./shell  
$ echo "/bin/ls" | ./shell  
AUTHORS exec.c hand_signal.c holberton.h main.c man_1_simple_shell path.c promp.c README.md strfuntions.c  
$  
  
**interactive mode:**  
$ gcc -Wall -Werror -Wextra -pedantic *.c -o ./shell  
$ ./shell  
#cisfun$ ls  
AUTHORS exec.c hand_signal.c holberton.h main.c man_1_simple_shell path.c promp.c README.md strfuntions.c  
#cisfun$  
#cisfun$ env  
SSH_AGENT_PID=1632 XDG_SESSION_ID=4 TERM=xterm-256color SHELL=/bin/bash SSH_CLIENT=10.0.2.2 53850 22 SSH_TTY=/dev/pts/0 USER=vagrant LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36: SSH_AUTH_SOCK=/tmp/ssh-fSR2hORudCtO/agent.1631 MAIL=/var/mail/vagrant PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games PWD=/home/vagrant/simple_shell LANG=en_US.UTF-8 SHLVL=1 HOME=/home/vagrant LOGNAME=vagrant SSH_CONNECTION=10.0.2.2 53850 10.0.2.15 22 LESSOPEN=| /usr/bin/lesspipe %s XDG_RUNTIME_DIR=/run/user/1000 LESSCLOSE=/usr/bin/lesspipe %s %s OLDPWD=/home/vagrant _=./a.out

# FILES

-   **holberton.h** This is the the file that contains all the librarys.

-   **AUTHORS** This the the file that contains the authors of the proyect.
-   **main.c** This is the file that contains the shell
-   **man_1_simple_shell** This file has the description of the the shell and how it works.
-   **hand_signal.c** This file contain the function of teh signal ctrl + C.
-   **exec.c** This file has the function execve that executes the program referred to by pathname.
-   **path.c** This file has the function that looking the functions in the directories of the variable PATH.
-   **prompt.c** This file has the function prompt for the interactive and no-interactive mode.
-   **README.md** This file has the description of the funcions for the git.
-   **Functions.c** This file has the functions that we implement.
-   **exit_h.c** This file has the exits of the functions.


# AUTHOR
simple_shell project for Holberton School by Francisco Londoño, Michelle Molina.

