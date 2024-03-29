//
//  main.cpp
//  CaesarChiper
//
//  Created by Mohammed Saber BELLAAZIRI on 07/03/2022.
//

#include <iostream>
#include <string>
#include <random>

using namespace std;
constexpr int MAX=26;

int main(int argc, const char * argv[]) {
    string textto;
    int keylength;
    srand((unsigned)time(0));
    cout << "---------This is the Ceasar Cipher Program, completly developped by :---------" << endl;
    cout << "----------------------Mohammed Saber BELLAAZIRI-------------------------" << endl;
    cout << "Please insert the text you wanna encrypt: " << endl;
    getline(cin, textto);
    string texttoo = textto;
    int length = (int) textto.length();
    cout << "Please insert the integer length of the key chosen by you; (WARNING: DO NOT SHARE THIS KEY DATA TO KEEP YOUR TEXT CRYPTED!!!)" << endl;
    cin >> keylength;
    cin.eof();
    int key[keylength];
    for (int i=0; i<keylength; i++){
        key[i]=rand()%MAX;
    }
    int i(0);
    while (textto[i] != '\0') {
        for (int j(0); j<keylength; j++){
            if (textto[i] >= 'a' && textto[i]<= 'z') {
                char c = textto[i] - 'a';
                c += key[j];
                c = c % 26;
                textto[i] = c + 'a';
            }
            i++;
        }
    }
    /*for (int i(0); i<length; i++){
        if (isalpha(textto[i])){
            textto[i] = tolower(textto[i]);
            for (int j(0); j<keylength; j++){
                for (int u(0); u<key[j]; u++){
                    if (textto[i]=='z'){
                        textto[i]='a';
                    }
                    else {
                        ++textto[i];
                    }
                }
            }
        }
    }*/
        
        /*!!!!!!!!TWO METHODS ARE MENTIONNED IN THIS CODE, THE ONE COMMENTED IS LESS EFFICIENT THAN THE OTHER ONE AND IT ENCIPER SIMILAR LETTERS BY SAME LETTERS!!!!!!!*/
        
    cout << "The text you inserted is : " << texttoo << endl;
    cout << "The encrypted version of the text is : " << endl;
    for (int u=0; u<=length; u++){
        cout << textto[u] ;
    }
    cout << " " << endl;
    cout << "The key used for this encrytpion is : " << endl;
    for (int u=0; u<keylength; u++){
        cout << key[u] << " ; ";
    }
    cout << " " << endl;
    cout << "WARNING REMAINDER : DO NOT SHARE YOUR CRYPTION KEY DATA !!!!!" << endl;
    cout << " " << endl;
    return 0;
    
    /*THE MAIN IDEA OF THIS CODE IS TO CREATE A RANDOM KEY OF INTEGERS, MOVING FORWARD THE LETTERS USING THE KEY CHOSEN AND ALLOCATE THE REACHED LETTER TO THE MAIN LETTER OF THE TEXT.*/
    /*FOR THIS REASON THE KEY IS A TOP SECRET INFORMATION THAT SHOULD NOT BE SHARED JUST BY THE RECEIVER OF THE TEXT OR THE MESSAGEGE*/
}


