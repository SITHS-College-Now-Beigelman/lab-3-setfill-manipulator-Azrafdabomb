// Azraf Hossain
// Lab 3
// 9.30.24

#include <iostream> // Required
#include <iomanip>

using namespace std; // Shortens Cout statments

int main() // this is the function titled "main"
{ //Starting bracket for the code

    cout << setw(78) << setfill('#') << "" << endl; // endl; is used to create a newline, moves the cursor to the next line
    cout << "#" << setfill(' ') << setw(77) << "#" << endl;
    cout << "# Ways to access the Task Manager on your Windows computer: " << setw(18) << '#' << endl;
    cout << "#" << setfill(' ') << setw(77) <<  '#' << endl;
    cout << "#    Press the key combination Ctrl + Shift + Escape" << setw(26) << "#" << endl;
    cout << "#" << setfill(' ') << setw(77) << "#" << endl;
    cout << "#    Press the key combination Ctrl + Alt + Delete and select \"Task Manager\" #" << endl;
    cout << "#" << setfill(' ') << setw(77) << "#" << endl;
    cout << "#    Type \"Task Manager\" in the Windows Start menu search" << setw(21) << "#" << endl;
    cout << "#" << setfill(' ') << setw(77) << "#" << endl;
    cout << setw(78) << setfill('#') << "" << endl << "" << endl;

return 0; // all programs must end with return zero
}

/*     
##############################################################################
#                                                                            #
# Ways to access the Task Manager on your Windows computer:                  #
#                                                                            #
#    Press the key combination Ctrl + Shift + Escape                         #
#                                                                            #
#    Press the key combination Ctrl + Alt + Delete and select “Task Manager” #
#                                                                            #
#    Type “Task Manager” in the Windows Start menu search                    #
#                                                                            #
##############################################################################

[1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-lf4beyyt.2f5" 1>"/tmp/Microsoft-MIEngine-Out-gmew2xdu.kdk"
@Azrafdabomb ➜ /workspaces/lab-1-cout-statements-Azrafdabomb (main) $ 
*/