📝 DOREMON-SCRIPT: Custom Compiler ProjectDOREMON-SCRIPT is a domain-specific programming language developed for the Compiler Lab project. It replaces standard programming keywords with iconic "gadgets" from the Doraemon universe to perform arithmetic, logic, and control flow operations. 

🚀 Project OverviewThe core of this project is a C-based interpreter that functions as a simplified compiler. It processes user-defined tokens (gadgets) and executes them as machine instructions.  Language Name: DOREMON-SCRIPT  Implementation Language: C  Total Functions: 27 Unique Gadgets  Paradigm: Procedural / Interpreted 
🛠 Project StructureThe project is organized into three primary stages:  Lexical Analysis (Scanner): Identifies Doraemon-themed keywords and maps them to internal token IDs.  Mapping Layer: Translates these tokens into executable C logic.  Execution Engine: Performs calculations and handles Input/Output (I/O). 

📋 Function Mapping TableBased on the My Language.pdf guidelines,
here are the 27 implemented functions: 

Standard Function     | Your Function   | Short Description
----------------------------------------------------------
Add/Sum               | BigLight       | Add two numbers

Subtract              | SmallLight     | Subtract two numbers

Multiply              | MemoryBread    | Multiply two numbers

Divide                | AirCannon      | Division of two number

Modulo                | Remnant        | Remainder of division

Power                 | TurboProp      | Raise to a power

Square Root           | RootGadget     | Calculate square root

Equal To              | MirrorImage    | Check equality

Not Equal To          | Opposite       | Check inequality

Greater Than          | Gian           | Check if greater than

Less Than             | Nobita         | Check if less than

Greater or Equal      | BigGian        | Check if greater or equal

Less or Equal         | SmallNobita    | Check if less or equal

AND                   | BestFriend     | Logical AND

OR                    | Choice         | Logical OR

NOT                   | Lies           | Logical NOT

Print                 | ShowGadget     | Output to screen

Input                 | 4DPocket       | Read user input

Return                | ReturnCheck    | Return from function

Absolute              | Reality        | Absolute value

Length                | SizeMeter      | Get size or length

If                    | IfOnlyPhone    | Conditional branch

Else                  | Otherwise      | Alternative branch

While                 | TimeLoop       | Repeat while true

For                   | TimeMachine    | Iterative loop

Break                 | AnywhereDoor   | Exit loop

Continue              | SkipTime       | Next iteration

💻 How to Use
1. Requirements
A C compiler (GCC/MinGW) or an online C environment.  

2. Compilation
To compile the project, run the following command in your terminal:

Bash
gcc Doremon.c -o doremon_compiler

3. Running the Program
Execute the binary and follow the prompts:

Bash
./doremon_compiler

4. Example Script
When the program asks for a gadget, you can input:

Plaintext
Enter Gadget Name: BigLight
Enter first number: 10
Enter second number: 20
Result: 30.00
🧩 Internal Logic Flow
Input: User enters a string (e.g., Gian).  

String Matching: The engine uses strcmp to find the gadget in the reserved keyword list.  

Instruction Execution: The program triggers the corresponding math or logic block.  

Final Output: The result is formatted and printed to the terminal.  

📜 License
This project was developed for academic purposes as part of the Compiler Lab course.
