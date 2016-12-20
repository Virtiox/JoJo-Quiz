#include <iostream>
#include <string>

using namespace std;

int main()
{
    string start = "";

    int a;
    int s;

    cout << "Scrivi 'Inizio' Per iniziare, 'Aiuto' per istruzioni ed 'Esci' per chiudere\n" << endl;
    cin >> start;
    cout << "\n" << endl;

    if (start == "Esci" || start== "esci" || start== "ESCI")
    {
        cout << "Non hai fatto un cazzo ma va bene ugualmente, premi invio\n";
        cin.ignore();
        cin.get();
        return 0;
    
    }
    if (start == "aiuto" || start== "Aiuto" || start== "AIUTO")
    {
        cout << "Non capisco perchè tu abbia chiesto aiuto a meno che tu non sia ritardato, "
             << "E' un semplice e stupido quiz dove sto buttando il sangue per farlo ed avere qualche soddisfazione"
             << "Se non conosci Jojo dovresti iniziarlo, e subito anche"
             << "Per ogni risposta cambieranno domande e influirà sulla soluzione finale"
             << "Pensa bene a quello che devi rispondere,"
             << "e ora inizia\n" << endl;
             
              if (start == "Inizio" || start== "inizio" || start== "INIZIO")
              
    {
        cout << "Question 1:\nChi Preferisci tra : Jonathan Joestar, Joseph Joestar(GIOVANE), Jotaro Kujo, Josuke Higashikata, Joseph Joestar(VECCHIO)"; 
        
    
        cin >> a;
        cout << "\n" << endl;
               
               if(a== "Jonathan Joestar" || a== "jonathan Joestar" || a== "Jonathan joestar" || a== "JONATHAN JOESTAR" || a== "jonathan joestar")
                   
                 {
                    cout << "Scelta molto antica a quanto pare, mi piace" ;
                    
               
               
               
               
               
        
