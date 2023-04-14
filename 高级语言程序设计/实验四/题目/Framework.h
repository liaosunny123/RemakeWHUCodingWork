#include <iostream>

using namespace std;

#define MSG_TYPE_MOUSE_CLICK    1
#define MSG_TYPE_KEY        2
#define MSG_TYPE_QUIT        3

struct Message {
    int type;
    int parameter1;
    int parameter2;
    Message *next;
};

class Window {
public:
    Window(const char *);

    virtual ~Window();

    void show_window();

    bool process_message(Message *);

protected:
    virtual void on_mouse_click(int, int);

    virtual void on_key(char);

    char window_title[20];
};

class Application {
public:
    Application();

    virtual void initialize();

    void add_messages_for_test();

    void run();

    bool process_message(Message *);

protected:
    virtual void on_message_quit();

    void sleep() { return; }

    void add_message(Message *);

    Message *take_first_message_from_queue();

    Message *message_queue;
    Window *main_window;
    bool end_app;
};
