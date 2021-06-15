import os, re, display, packages, config

os.system("clear")
def menu():
    #default menu
    display.banner()
    display.sep()
menu()
option = input("user@holy-grail-installer> ")

while option != 0:
    if option == "0":
        #null
        print()
    elif option == "exit":
        #close program
        print("Goodbye")
        exit()
    elif option == 'ls':
        #listing commands
        display.sep()
        display.commands()
    elif option == 'greeks install' or option == '1':
        config.greek_grub_config()
        config.greeks_bashrc()
        config.greeks_qemu_config()
        config.greeks_qemu_config()
        config.greeks_script_setup()
    elif option == '2' or option == 'auto setup':
        print("Invalid option please download https://github.com/cronos-hash/auto_gpu_passthrough")
    elif option == "clear" or "3":
        #clear terminal option
        display.clear()
    elif option == "exit":
        #close program
        print("Goodbye!")
        quit()
        exit()
        sys.exit()
    else:
        print("Not a command")
    print()
    #user bar
    option = input("user@holy-grail-installer> ")
