Before replacing any files, make sure to backup or make copies of the original files.

These files are specifically for wethinkcode in Cape Town and Johannesburg.
These files allow you to kinit a kerberos ticket using your wethinkcode login.
The ticket will identify you as your login, and allow you to git clone/push etc. your vogshere repo depending on your permissions.

You may need to install kerberos and openssh, and probably git.

I have tested this on macOS, it should work for Linux, and I haven't tested it on Windows

krb5.conf
must be placed in
/etc/

ssh_config
must be placed in
/etc/.ssh/

config
must be placed in
~/.ssh/
