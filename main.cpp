#include <iostream>

using namespace std;

int main(int argc, char **argv){

    string stringToSay;
    for(int i = 1; i < argc; i++){
        stringToSay.insert(stringToSay.length(), argv[i]);
    }

    string rinoAscii = " |     ,       ,\n |    /|    |\\./'.\n |   | |  ,  \\|| ,|\n \\   \\  \\_(\\.-\"\"\\//.  \n  .-'`\"\"``\"` _   ` `-.`\"\"\"--.._      _..----. __\n  | '~`      o\\                `\"---\"        `. `\"-.==,\n   \\,.-;    `\"`                                |`\"\"`===`\n     (`            /                           |\n      `-----.____.;          \\     |           ;\n                  \\__         |    \\          /\n                 .'         .'      \\        ' `,\n                /          /         '._        |\n                |    '.---;`-.____.-'`\\ `\"\"`;   |\n                |     _\\   \\    '.     )   /    \\ \n                \\-,--( /   /    _/   .'   |_ _ .-)\n                 '----;)__;    (`.-. ;    `-:.;-'\n                                `\"\"\"\"`\n";

    if(stringToSay.empty()){
        cout << "Write the wanted string inside quote marks like this:" <<  endl;
        cout << "rinosay \"rinosay is awesome!\" " <<  endl;
    } else if (stringToSay.length() > 82) {
        cout << "String too big, Max char number is 82" <<  endl;
    }else {
        string speechBubbleWallTop;
        string speechBubbleWallBottom;
        for(int i = 0; i < stringToSay.length(); i++){
            speechBubbleWallTop.insert(0, "_");
            speechBubbleWallBottom.insert(0, "-");
        }
        cout << "  " << speechBubbleWallTop <<  endl;
        cout << "[ " << stringToSay << " ]" <<  endl;
        cout << "  " << speechBubbleWallBottom <<  endl;
        cout << rinoAscii <<  endl;
    }

    return 0;
}