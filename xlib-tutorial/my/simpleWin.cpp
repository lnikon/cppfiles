#include <X11/xlib.h>
#include <assert.h>
#include <unistd.h>

#define NIL (0)

int main(int argc, char *argv[])
{
    Display *dpy = XOpenDisplay(NIL);
    assert(dpy);
    int blackColor = BlackPixel(dpy, DefaultScreen(dpy));
    // Crate Window
    Window w = XCreateSimpleWindow(dpy, DefaultRootWindow(dpy), 0, 0,
            200, 100, 0, blackColor, blackColor);
    // We want to get MapNotify events
    XSelectInput(dpy, w, StructureNotifyMask);
    // "Map" the window. (That is, make it appear on the screan
    XMapWindow(dpy, w);
    // Create a "Graphics Context"
    GC gc = XCreateGC(dpy, w, 0, NIL);
    XSetForeground(dpy, gc, whiteColor);

    // Wait for the MapNotify event
    for(;;)
    {
        XEvent e;
        XNextEvent(dpy, &e);
        if(e.type == MapNotify)
            break;
    }
    
    // Draw the line
    XDrawLine(dpy, w, gc, 10, 60, 180, 20);

    // Send the "DrawLine" request to the server
    XFlush(dpy);   
    sleep(10);

    return EXIT_SUCCESS;
}

