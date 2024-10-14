#include <iostream>
#include <string>
#include <algorithm> // for transform function
using namespace std;

// Function to convert string to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Function to check if the user input contains specific keywords
bool hasKeyword(string input, string keyword) {
    return input.find(keyword) != string::npos;
}

int main() {
    string input;
    cout << "AI Chatbot: Hi! I am an AI chatbot. How can I help you today?" << endl;

    while (true) {
        cout << "You: ";
        getline(cin, input); // Get user input

        // Convert input to lowercase for easier keyword matching
        string lowerInput = toLowerCase(input);

        // Chatbot responses based on keyword matching
        if (hasKeyword(lowerInput, "hello") || hasKeyword(lowerInput, "hi")) {
            cout << "AI Chatbot: Hello! How are you today?" << endl;
        } 
        else if (hasKeyword(lowerInput, "how are you")) {
            cout << "AI Chatbot: I'm just a program, but I'm doing great! How about you?" << endl;
        } 
        else if (hasKeyword(lowerInput, "name")) {
            cout << "AI Chatbot: My name is AI Bot. What's yours?" << endl;
        } 
        else if (hasKeyword(lowerInput, "weather")) {
            cout << "AI Chatbot: I don't have access to live weather data, but I hope it's sunny where you are!" << endl;
        } 
        else if (hasKeyword(lowerInput, "bye")) {
            cout << "AI Chatbot: Goodbye! Have a great day!" << endl;
            break; // Exit the loop
        } 
        else {
            cout << "AI Chatbot: I'm sorry, I don't understand that. Can you ask something else?" << endl;
        }
    }

    return 0;
}
