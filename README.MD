This release is based on the code contains in alpha.rc.  It resolves the issue seen where the 'inset' box on the main screen is shifted 
up and to the left.

Note: Also, associated with this change is a update and install of VNC server and viewer to eliminate the pop-up dialog that remains on 
top of the application.  Updating the VNC install still results in a pop-up, but it happens early in the bootup before the .bashrc script
runs the application and the pop-up minimizes to the desktop.  This is an improvment but I think the better choice in the long run is to
run VNC as a service and not from .bashrc.

