st - simple terminal
--------------------
st is a simple terminal emulator for X which sucks less.

![image](https://user-images.githubusercontent.com/68345611/158052039-2b4e256c-3a06-4bdb-9290-e3cc071e8269.png)


Requirements
------------
In order to build st you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (st is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

    make clean install


Running st
----------
If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

    tic -sx st.info

See the man page for additional details.

Credits
-------
Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.

