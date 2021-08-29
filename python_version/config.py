import os, platform, subprocess, cpuinfo, display, re
def greek_grub_config():
    #copy over my configurations 
    os.system("sudo cp ./configurations/greeks_config/grubs/amd/grub /etc/default/grub")
    #rebuild grub bootloader
    os.system("sudo grub-mkconfig -o /boot/grub/grub.cfg")

def greeks_bashrc():
    os.system("sudo chsh -s /bin/bash")
    os.system("sudo chsh -s /bin/bash greek")
    os.system("sudo cp ./configurations/greeks_config/.bashrc /home/greek")

def greeks_qemu_config():
    os.system("sudo cp ./configurations/greeks_config/vfio-pci-override.sh /usr/local/bin")
    os.system("sudo cp ./configurations/greeks_config/mkinitcpio.conf /etc/")
    os.system("sudo cp ./configurations/greeks_config/vfio.conf /etc/modprobe.d")
    os.system("sudo mkinitcpio -p linux")
    os.system("sudo pacman -Syu")
    #creating mount point 
    os.system("mkdir /home/greek/media")
    os.system("mkdir /home/greek/media/iso")
    os.system("sudo mount /dev/sda1 /home/greek/media/iso")

    #moving qemu configuration
    os.system("sudo cp ./configurations/greeks_config/qemu.conf /etc/libvirt")
#tesing github codespaces with this comment
    #starting libvirtd services and log/network
    os.system("sudo systemctl enable libvirtd.service")
    os.system("sudo systemctl start libvirtd.service")
    os.system("sudo systemctl start virtlogd.socket")
    os.system("sudo systemctl virtlogd.socket")
    os.system("sudo virsh net-start default")
    os.system("sudo sudo systemctl restart libvirtd")
    os.system("sudo virsh net-autostart default")


    #defining virt-manager configurations
    os.system("sudo virsh define ./configurations/greeks_config/virt-manager/win10.xml")
    os.system("sudo virsh define ./configurations/greeks_config/virt-manager/macOS.xml")
    os.system("sudo virsh define ./configurations/greeks_config/virt-manager/win11.xml")

def greeks_script_setup():
    os.system("mkdir /home/greek/scripts")
    os.system("sudo cp ./configurations/greeks_config/scripts/* /home/greek/scripts")
    os.system("sudo cp ./configurations/greeks_config/virt-manager/OVMF_VARS-1024x768.fd /home/greek/media/iso/macOS-Simple-KVM/firmware/OVMF_VARS-1024x768.fd")
    os.system("mkdir /home/greek/miner")
    os.system("sudo cp ./configurations/greeks_config/miner/* /home/greek/miner")
    os.system("sudo cp ./configurations/greeks_config/rc.xml /home/greek/.config/openbox")
    os.system("openbox --restart")
    os.system("sudo cp ./configurations/greeks_config/compton.conf /home/greek/.config/compton.conf")
    os.system("sudo cp ./configurations/greeks_config/10-looking-glass.conf /etc/tmpfiles.d")
    os.system("sudo cp ./configurations/greeks_config/20-amdgpu.conf /usr/share/X11/xorg.conf.d")
    os.system("sudo chmod +x ./install_others.sh")
    print("please run additional script for looking glass etc! (cant run as sudo)")
    display.reboot_menu()
    
