// LinkList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



namespace std {
    template<typename valuee>
    struct linker
    {
        valuee val;
        linker* next;
    };
    

    template<typename valuee>
    class linkedlist {
    public: 
        valuee data;
        linkedlist* next;
    };

    
}

namespace std {
    template<typename valuee>
    void coutList(linkedlist<valuee>* value) {
        while (value != NULL) {
            std::cout << value->data << " ";
            value = value->next;
        }
    }
    template<typename valuee>
    valuee getLinkListValue(linkedlist<valuee>* value) {
        return value->data;
    }
    template<typename valuee>
    linkedlist<valuee>* getLinkListNext(linkedlist<valuee>* value) {
        return value->next;
    }
    template<typename valuee>
    void addLinkedList(linkedlist<valuee>* value, valuee data, linkedlist<valuee>* next) {
        value->data = data;
        value->next = next;
    }
    template<typename valuee>
    int getLinkedListSize(linkedlist<valuee>* value) {
        int i = 0;
        while (value != nullptr) {
            i++;
            value = value->next;
        }
        return i;
    }

}
template<typename valuee>
int main()
{
    std::linkedlist<valuee>* head = NULL;
    std::linkedlist<valuee>* second = NULL;
    std::linkedlist<valuee>* third = NULL;

    head = new std::linkedlist();
    second = new std::linkedlist();
    third = new std::linkedlist();

    std::addLinkedList(head, 1, second);
    std::addLinkedList(second, 2, third);
    std::addLinkedList(third, 3, NULL);

    int test = std::getLinkedListSize(head);


    std::cout << "Hello World!\n";
    std::coutList(head);
    std::cout << test << std::endl;
   
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
