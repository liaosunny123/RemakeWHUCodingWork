#include <cstring>
#include "Framework.h"

Application *thisApp;

Window::Window(const char *name) {
    strcpy(window_title, name);
}

Window::~Window() {
    return;
}

void Window::show_window() {
    cout << "The window \"" << window_title << "\" is displayed!" << endl;
}

bool Window::process_message(Message *msg) {
    bool processed_or_not;
    switch (msg->type) {
        case MSG_TYPE_MOUSE_CLICK:
            on_mouse_click(msg->parameter1, msg->parameter2);
            processed_or_not = true;
            break;
        case MSG_TYPE_KEY:
            on_key((char) (msg->parameter1));
            processed_or_not = true;
            break;
        default:
            processed_or_not = false;
    }
    return processed_or_not;
}

void Window::on_mouse_click(int x, int y) {
    return;
}

void Window::on_key(char c) {
    return;
}

Application::Application() {
    message_queue = NULL;
    main_window = NULL;
    end_app = false;
    thisApp = this;
}

void Application::initialize() {
    main_window = new Window("New Window");
    main_window->show_window();
}

void Application::add_messages_for_test() {
    Message *msg1 = new Message;
    msg1->type = MSG_TYPE_MOUSE_CLICK;
    msg1->parameter1 = 20;
    msg1->parameter2 = 40;
    add_message(msg1);

    Message *msg2 = new Message;
    msg2->type = MSG_TYPE_KEY;
    msg2->parameter1 = 'c';
    add_message(msg2);

    Message *msg3 = new Message;
    msg3->type = MSG_TYPE_QUIT;
    add_message(msg3);
}

void Application::run() {
    while (1) {
        if (message_queue != NULL) {
            Message *msg = take_first_message_from_queue();
            bool processed_or_not = main_window->process_message(msg);
            if (processed_or_not == false)
                process_message(msg);
            delete msg;
            if (end_app == true) return;
        } else sleep();
    }
}

bool Application::process_message(Message *m) {
    switch (m->type) {
        case MSG_TYPE_QUIT:
            on_message_quit();
            return true;
            break;
        default:
            return false;
    }
}

void Application::on_message_quit() {
    end_app = true;
    delete main_window;
}

void Application::add_message(Message *m) {
    m->next = NULL;
    if (message_queue == NULL)
        message_queue = m;
    else {
        Message *temp = message_queue;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = m;
    }
}

Message *Application::take_first_message_from_queue() {
    Message *temp = message_queue;
    message_queue = message_queue->next;
    return temp;
}

int main() {
    thisApp->initialize();
    thisApp->add_messages_for_test();
    thisApp->run();
    return 0;
}
