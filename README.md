# Clinic-Management-System
###### C Programming project
## Introduction
Write a C code for clinic management system. At the beginning of the system it asks the user to choose 
between admin mode and user mode. 
### In admin mode 
The system asks for password, the default password is 1234. The system allows 3 trails for the password 
entry, if the entered password was incorrect for 3 consecutive times, the system shall close. After login 
in the admin mode, the system shall provide the following features: 
##### 1. Add new patient record: 
To add a new patient, the user shall admin shall enter these basic information: name, age, gender and 
ID. The ID shall be unique for the user, if the entered ID is already exists, the system shall reject the 
entry. 
##### 2. Edit patient record 
By entering patient ID the system shall checks if the ID exists, the system shall allow the user to edit the 
patient information. If not, the system shall display incorrect ID message. 
##### 3. Reserve a slot with the doctor 
By default there are 5 available slots, 2pm to 2:30pm, 2:30pm to 3pm, 3pm to 3:30pm, 4pm to 4:30pm 
and 4:30pm to 5pm. Upon opening of this window, the system shall display the available slots. The 
admin shall enter the patient ID and the desired slot. The reserved slot shall not appear again in the next 
patient reservation. 
##### 4. Cancel reservation. 
The admin can cancel a reservation by entering the patient ID. This reservation shall be shown again in 
the available slots window. 
### In the user mode 
There is no password. The system allows the following features: 
##### 1. View patient record. 
By entering the patient ID, the system shall show the basic information for the patient. 
##### 2. View today’s reservations. 
In this view, the system shall print all reservations with the patient ID attached to each reservation slot.

<br />

#### Full description of the module

[![Project Video]](https://github.com/MuhamedAmr10/Vacuum-Cleaner-Robot/assets/168368256/c749cbf5-1c63-4533-9183-7978dc5b855d)

<br />
<br /> 

## Installation
- #### Installing a text editor
  For writting and editing code like Notepad++ & Visual studio code
- #### Installing a minGW
   Which is a complete GCC toolchain . On a computer with Windows installed, the library that contains most ready-made executable code is not compatible with gcc compiler ... so to use this compiler in Windows   `  you need a different library: that's where MinGW enters. MinGW provides, among other things, the library(ies) needed for making a C implementation together with gcc.

## Compiling and Running C Program

- After Installing minGW .. write a C program using a text editor .

- After writing a C program .. Click only one on  project file , then write "CMD" on path and finaly Enter , here you can see !

<img src="https://github.com/MuhamedAmr10/Clinic-Management-System-/assets/168368256/e4289382-9414-40df-b614-77d370c787b7" width = "400" height = "150" >

- After Entering a CMD .. Write "gcc project_name.c -o file.exe" click Enter, then write : "file.exe" and click Enter, here you can see !

  <img src="https://github.com/MuhamedAmr10/Clinic-Management-System-/assets/168368256/f5c605cb-abc9-4729-9053-275add40aeaa" width = "400" height = "150" >

  #### ex Compiling and running LED_Blink.c in lab.exe :

  ```
  >gcc LED_Blink.c -o lab.exe
  >lab.exe

  ```

  



