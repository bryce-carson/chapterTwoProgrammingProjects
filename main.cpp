#include <iostream>
#include "string"
#include "cmath"
#include <cstdlib>

using namespace std;

// GLOBALS

int main() {
    // Project one
    // Masses are in grams
//    double mouse_mass = 35.0, mouse_ld50 = 5.0, human_target_mass = 45400.0,
//            cola_mass = 350, cola_mass_sweetener = 0.001 * cola_mass;
//    const double mouse_ld50_proportion = (mouse_ld50 / mouse_mass) * 1000.0; // Convert to g/kg
//
//    char repeat_program;
//    do {
//
//        cout
//        << "The LD50 for an artificial sweetener in mice of an average mass of " << mouse_mass << "g is "
//        << mouse_ld50 << "g,\n"
//        << "Input your target weight to determine whether you can safely consume diet cola containing this artificial\n"
//        << "sweetener while dieting and afterwards.\n\n"
//
//        << "Your target weight (mass) in grams: ";
//        cin >> human_target_mass;
//        human_target_mass /= 1000.0; // Convert to kg
//
//        double
//        human_ld50_proportion = mouse_ld50_proportion,
//        human_ld50 = human_ld50_proportion * human_target_mass;
//
//        cout
//        << "The LD50 for mice is " << mouse_ld50_proportion << "g/kg.\n"
//        << "Assuming the same proportion applies to humans, then the dosage that would kill 50% of the people who "
//        << "consume it\nand who have a mass of "
//        << human_target_mass << "kg is " << human_ld50
//        << "g of this sweetener with as little (or as much) as 50% chance of dying!\n\n"
//
//        << "That means you can consume up to\n"
//        << human_ld50 / cola_mass_sweetener
//        << " cans of this diet cola, with a 50% chance of perishing if you consume that much at once.\n\n";
//
//        cout << "Would you like to repeat the program with different data (Y/n)? ";
//        cin >> repeat_program;
//    } while (repeat_program == 'Y' || repeat_program == 'y');

    // Project two
//    const double pay_increase = 0.076;
//    double employee_salary, pay_retroactive;
//    char calculate_another_salary;
//
//    // See notebook pages 7+ for more notes than what the textbook has introduced so far.
//    cout.setf(ios::fixed | ios::showpoint);
//    cout.precision(2);
//
//    do {
//        // Prompt and inputs
//        cout
//        << "Enter the salary of the current employee to calculate the retroactive pay increase, the new annual salary,\n"
//        << "and the new monthly salary.\n"
//        << "Current salary: $";
//        cin >> employee_salary;
//
//        // Outputs
//        cout << "Previous salary: $" << employee_salary << endl;
//        pay_retroactive = employee_salary / 2.0; // 6 months of previous salary
//        employee_salary += employee_salary * pay_increase; // 1.076x
//        pay_retroactive -= employee_salary / 2.0; // Negative magnitude difference between new salary and old 6 months
//        pay_retroactive *= -1.0; // Change magnitude to positive
//        cout << "New salary (annual): $" << employee_salary << endl;
//        cout << "New salary (monthly): $" << employee_salary / 12.00 << endl;
//        cout << "Retroactive pay (6 months): $" << pay_retroactive << endl;
//
//        cout << "Repeat calculations for another employee (Y/n)? ";
//        cin >> calculate_another_salary;
//    } while ((calculate_another_salary == 'Y') ||
//             (calculate_another_salary == 'y'));

    // Project three
//    const double pay_increase = 0.076;
//    double employee_salary, pay_retroactive;
//    int pay_retroactive_months = 6;
//    char calculate_another_salary;
//
//    // See notebook pages 7+ for more notes than what the textbook has introduced so far.
//    cout.setf(ios::fixed | ios::showpoint);
//    cout.precision(2);
//
//    do {
//        // Prompt and inputs
//        cout
//        << "Enter the salary of the current employee to calculate the retroactive pay increase, the new annual salary,\n"
//        << "and the new monthly salary.\n"
//        << "Current salary: $";
//        cin >> employee_salary;
//        cout << "Number of months of retroactive pay: ";
//        cin >> pay_retroactive_months;
//
//        // Outputs
//        cout << "Previous salary: $" << employee_salary << endl;
//        pay_retroactive = employee_salary / (12.0 / pay_retroactive_months); // 6 months of previous salary
//        employee_salary += employee_salary * pay_increase; // 1.076x
//        pay_retroactive -= employee_salary / (12.0 / pay_retroactive_months); // Negative magnitude difference between new salary and old 6 months
//        pay_retroactive *= -1.0; // Change magnitude to positive
//        cout << "New salary (annual): $" << employee_salary << endl;
//        cout << "New salary (monthly): $" << employee_salary / 12.00 << endl;
//        cout << "Retroactive pay (6 months): $" << pay_retroactive << endl;
//
//        cout << "Repeat calculations for another employee (Y/n)? ";
//        cin >> calculate_another_salary;
//    } while ((calculate_another_salary == 'Y') ||
//             (calculate_another_salary == 'y'));

    // Project four
    double loan_principle_desired;
    double loan_interest_rate = -100.00; // -100.00 is a magic number. It could be any number.
    int loan_term;

    char repeat_answer;
    do { // repeat_answer declared above is initialized with prompted answer for while loop after compound is done once.
        cout << "Input desired loan principle: ";
        cin >> loan_principle_desired;
        int loan_principle_desired_cents_Integer = static_cast<int>(loan_principle_desired * 100.00); // 100.00 to 10000

        // While the input rate is not of the correct format, reset the variable to the magic number to repeat the loop.
        // Type checking and defensive programming will be learned later.
        while (loan_interest_rate == -100.00) {
            cout << "Input loan interest rate (as a percentage, like '19.99'): ";
            cin >> loan_interest_rate;
            if (loan_interest_rate > 100.00) {
                loan_interest_rate = -100.00;
            } else if (loan_interest_rate <= 0) {
                loan_interest_rate = -100.00;
            }
        }
        loan_interest_rate *= 0.01; // Convert to decimal less than 1, greater than 0.
        cout << "Input loan term (months): ";
        cin >> loan_term;
        double loan_term_proportion = loan_term / 12.0; // 18 => 1.5

        // Temporarily, guessing.
//        int loan_principle_cents_Integer = static_cast<int>(loan_principle_desired_cents_Integer +
//                                                            (loan_principle_desired_cents_Integer *
//                                                             loan_interest_rate *
//                                                             loan_term_proportion));
        int loan_principle_cents_Integer = static_cast<int>(loan_principle_desired_cents_Integer * 2);
        int loan_interest_cents_Integer = static_cast<int>(round(loan_principle_cents_Integer *
                                                                    loan_interest_rate *
                                                                    loan_term_proportion));
        while ((loan_principle_cents_Integer - loan_interest_cents_Integer) > loan_principle_desired_cents_Integer) {
            loan_principle_cents_Integer--;
            loan_interest_cents_Integer = static_cast<int>(round(loan_principle_cents_Integer *
                                                                    loan_interest_rate *
                                                                    loan_term_proportion));
            cout.precision(2);
            cout << "Recalculating...\tPrinciple\t$" << fixed << loan_principle_cents_Integer / 100.00
                 << "\tInterest\t$" << loan_interest_cents_Integer / 100.00 << endl
                 << "Please be patient...\n";
        }
        if ((loan_principle_cents_Integer - loan_interest_cents_Integer) != loan_principle_desired_cents_Integer) {
            cout << "Oops, the principle cannot be calculated with the guess method.\n"
                 << "Principle desired:\t¢" << loan_principle_desired_cents_Integer
                 << "\tPrinciple:\t¢" << loan_principle_cents_Integer << endl;

            exit(1);
        }

        cout << "Loan principle:\t" << loan_principle_cents_Integer / 100.00 << endl
             << "Loan interest:\t" << loan_interest_cents_Integer / 100.00 << endl
             << "Loan principle discount interest:\t" << (loan_principle_cents_Integer -
                                                          loan_interest_cents_Integer) / 100.00 << endl;

        int loan_payment_cents_Integer = loan_principle_cents_Integer / loan_term;

        int month_counter = loan_term;
        while (loan_principle_cents_Integer > 0) {
            if (loan_principle_cents_Integer < loan_payment_cents_Integer) {
                loan_payment_cents_Integer = loan_principle_cents_Integer;
            }
            cout.precision(2);
            cout << "Month:\t" << abs(loan_term - month_counter) << "\tPayment:\t¢" << loan_payment_cents_Integer
                 << "\tPrincipal:\t$" << fixed << loan_principle_cents_Integer / 100.00 << endl;
            loan_principle_cents_Integer -= loan_payment_cents_Integer;
            month_counter--;
        }
        cout << "Repeat calculations? (Y/n) ";
        cin >> repeat_answer;
        loan_interest_rate = -100.00; // Reset to the magic number so the repeated compound is correct.
    } while ((repeat_answer == 'Y') || (repeat_answer == 'y'));

    return 0;
}
