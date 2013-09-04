#include <iostream>
using namespace std;

int main ()
{
	char name[16];
	cout << "\n        .-.              .                               ";
	cout << "\n          ;  :       ...;....;      .-.                  ";
	cout << "\n        .;:  : .-.    .'    ;;-.    `-' . ,';.  ,:.,'    ";
	cout << "\n       .;' \\ :;   ;'.;     ;;  ;   ;'   ;;  ;; :   ;     ";
	cout << "\n   .:'.;    \\:`;;'.;      .;`  `_.;:._.';  ;;   `-:'     ";
	cout << "\n  (__.'      `.                        ;    `.-._:'      ";
	cout << "\n             .-.                                .;       ";
	cout << "\n     .;;;.`-'                    .-.           .;'       ";
	cout << "\n    ;;  (_)`..:.   .-.  .-.      `-' .-.      .;         ";
	cout << "\n    `;;;.   ;;  :.;.-' ;        ;'  ;   :    ::          ";
	cout << "\n    _   `:  ;;_.` `:::'`;;;;'_.;:._.`:::'-'_;;_.-        ";
	cout << "\n   (_.;;;' .;'                                           ";
	cout << "\n   .-.;;;;;;' `;   .'    .-.                 .-       .- ";
	cout << "\n  (_)  .;    _ `; ; (   (_) )-.      .;;;.`-' .;;;.`-'   ";
	cout << "\n       :    (  ;' ;  )    .:   \\    ;;  (_)  ;;  (_)     ";
	cout << "\n     .:'     `.;__;.'    .::.   )   .;;; .-. .;;; .-.    ";
	cout << "\n   .-:._  .  .:'  `:.  .-:. `:-'   ;;  .;  ;;;  .;  ;    ";
	cout << "\n  (_/  `-(_.'       `:(_/     `:._.`;.___.' `;.___.'     ";

	cout << "\n\n You appear to be in a camp as darkness is falling.";
	cout << "\n A man, looming in front of you, asks, \"What is your name, stranger?\" ";
	cin >> name;
	cout << "\n\n You are no longer a stranger, " << name << ".";

	return 0;
}