# Multi EXE

## **Overview**
The Multi-Application Opener is a tool designed to simplify the process of managing and executing multiple files or programs. Initially built as a console-based application, it evolves into a feature-rich graphical program using wxWidgets, supporting custom file extensions for batch execution.

---

## **Features**

### **MVP Features**
- **Add Files**: Enter file paths manually or through a command-line prompt to add them to a list.
- **View Files**: Display the current list of files.
- **Remove Files**: Remove specific files from the list by specifying their index.
- **Open Files**: Execute all files in the list using the system's execution command (e.g., `std::system`).

### **Planned Enhancements**
1. **File Explorer for Adding Files**:
   - Browse the file system using a file picker to add files easily.

2. **Custom File Extension**:
   - Use a `.mexe` file to store and execute a batch of programs.
   - Automatically open programs listed in the `.mexe` file, then exit the opener program.

3. **File List Creation and Editing**:
   - Save file lists as `.mexe` files.
   - Open and edit existing `.mexe` files (e.g., add, remove, or reorder items).

4. **Graphical User Interface (GUI)**:
   - Transition from a console-based program to a wxWidgets-based GUI.
   - Features include buttons, file lists, and a menu for actions like saving/loading lists and styling.

5. **Styling and Theming**:
   - Apply custom themes, icons, and styles for a polished user experience.

## **Usage**

### **Using `.mexe` Files** (Planned)
1. Create a `.mexe` file with the desired list of executable paths.
   - Example content:
     ```
     C:\path\to\app1.exe
     C:\path\to\app2.exe
     ```
2. Open it with the program to automatically execute the listed files.

---

## **Development Roadmap**

### **Phase 1: Console-Based MVP**
- Core functionality: Add, view, remove, and open files.
- Test for cross-platform compatibility.

### **Phase 2: File Explorer & File Format Enhancements**
- Add native file picker for adding files.
- Introduce `.mexe` file format for batch execution.

### **Phase 3: GUI Transition**
- Build a basic wxWidgets-based GUI.
- Implement buttons and menus for all actions.

### **Phase 4: Polish and Distribution**
- Add theming and icons for the GUI.
- Create detailed documentation.
- Package the application for distribution.

---

## **Contributing**
Contributions are welcome! Feel free to open issues or submit pull requests on GitHub.

### **To Contribute**:
1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add new feature"
   ```
4. Push to your branch and open a pull request:
   ```bash
   git push origin feature-name
   ```

---

## **License**
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.