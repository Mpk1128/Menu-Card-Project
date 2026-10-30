# 🍽️ MANCAFE – Restaurant Menu Card in C

## 📌 About the Project

MANCAFE is a simple restaurant menu card mini project developed using the **C programming language**. This project allows customers to select food items, add them to their cart, view the total bill, and choose a payment method.

It is a console-based application designed to demonstrate basic C programming concepts.

##  Features

- Displays a restaurant menu.
- Allows customers to select multiple food items.
- Maintains the quantity of each selected item.
- Calculates the price of each food item.
- Generates the total bill.
- Displays GST (currently set to 0%).
- Provides two payment options:
  - Cash
  - UPI
- Displays a thank-you message after payment selection.

## 🍕 Menu Card

| S.No | Food Item | Price |
|---|---|---:|
| 1 | Pasta | ₹120 |
| 2 | Biriyani | ₹250 |
| 3 | Pizza | ₹250 |
| 4 | Coffee | ₹15 |
| 5 | Exit | - |

##  Technologies Used

- **Programming Language:** C
- **Header File:** stdio.h
- **Concepts Used:**
  - Variables and Data Types
  - Conditional Statements
  - Switch Case
  - Do-While Loop
  - Goto Statement
  - Arithmetic Operations
  - User Input and Output

##  How to Run the Project

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/your-repository-name.git
   ```

2. Navigate to the project folder:

   ```bash
   cd your-repository-name
   ```

3. Compile the C program:

   ```bash
   gcc menu.c -o menu
   ```

4. Run the program:

   **Windows:**
   ```bash
   menu.exe
   ```

   **Linux / macOS:**
   ```bash
   ./menu
   ```

##  Sample Output

```text
<..........MANCAFE.........>

1.pasta = 120
2.biriyani = 250
3.pizza = 250
4.coffee = 15
5. for exit

enter your choice

your pasta order is added to your cart

Quantity --pasta*1

<------------total items added to your cart--------------->

pizza*1=120

Total   =120
GST     =0

GRAND TOTAL=120

pick the payment option

1.cash
2.UPI

your selected cash payment

<---------------THANK YOU VISIT AGAIN------------------>
```

##  Learning Outcome

Through this project, I learned how to implement menu-driven programs in C, handle user choices using switch statements, maintain item quantities, and calculate bills using arithmetic operations.

##  Author

**Manoj P K**

---

⭐ If you like this project, feel free to star this repository!
