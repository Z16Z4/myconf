
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int choice =0;
  while(choice != 3){
    puts("/=========================/");
    puts("      CONFIG MANAGER       ");
    puts("1. Install packages");
    puts("2. Set-up Desktop");
    puts("3. Exit"); 
    puts("/=========================/");
    printf(">>");
    scanf("%d", &choice);
    switch(choice){
      case 1:
        puts("Install Packages Menu");
        int sub_choice1 = 0;
        while  (sub_choice1 != 22){
          puts("/=========================/");
          puts("     PACKAGE MANAGER       ");
          puts("1. cool-retro-term");
          puts("2. net-tools");
          puts("3. git");
          puts("4. firefox");
          puts("5. discord");
          puts("6. barrier");
          puts("7. synergy");
          puts("8. cmatrix");
          puts("9. bashtop");
          puts("10.youtube-dl");
          puts("11.figlet");
          puts("12.neofetch");
          puts("13.lolcat");
          puts("14.tmux");
          puts("15.exa");
          puts("16.bat");
          puts("17.starship");
          puts("18.task");
          puts("19. Virtualisation Packages");
          puts("20. All + Virtualisation Packages");
          puts("21. All but Virtualisation Packages");
          puts("22. Exit");
          puts("/=========================/");
          printf(">>");
          scanf("%d", &sub_choice1);
          if (sub_choice1 == 1){
            int a;
            a=system("sudo pacman -S cool-retro-term");
            return a;
          }
          else if(sub_choice1 == 2){
            int b;
            b=system("sudo pacman -S net-tools");
            return b;
          }
          else if(sub_choice1 == 3){
            int c;
            c=system("sudo pacman -S git");
            return c;
          }
          else if(sub_choice1 == 4){
            int d;
            d=system("sudo pacman -S firefox");
            return d;
          }
          else if(sub_choice1 == 5){
            int e;
            e=system("sudo pacman -S discord");
            return e;
          }
          else if(sub_choice1 == 6){
            int f;
            f=system("sudo pacman -S barrier");
            return f;
          }
          else if(sub_choice1 == 7){
            int g;
            g=system("sudo pacman -S synergy");
            return g;
          }
          else if(sub_choice1 == 8){
            int h;
            h=system("sudo pacman -S cmatrix");
            return h;
          }
          else if(sub_choice1 == 9){
            int i;
            i=system("sudo pacman -S bashtop");
            return i;
          }
          else if(sub_choice1 == 10){
            int j;
            j=system("sudo pacman -S youtube-dl");
            return j;
          }
          else if(sub_choice1 == 11){
            int k;
            k=system("sudo pacman -S figlet");
            return k;
          }
          else if(sub_choice1 == 12){
            int l;
            l=system("sudo pacman -S neofetch");
            return l;
          }
          else if(sub_choice1 == 13){
            int m;
            m=system("sudo pacman -S lolcat");
            return m;
          }
          else if(sub_choice1 == 14){
            int n;
            n=system("sudo pacman -S tmux");
            return n;
          }
          else if(sub_choice1 == 15){
            int o;
            o=system("sudo pacman -S exa");
            return o;
          }
          else if(sub_choice1 == 16){
            int p;
            p=system("sudo pacman -S bat");
            return p;
          }
          else if(sub_choice1 == 17){
            int q;
            q=system("sudo pacman -S starship");
            return q;
          }
          else if(sub_choice1 == 18){
            int r;
            r=system("sudo pacman -S task");
            return r;
          }
          else if(sub_choice1 == 19){
            int s;
            s=system("sudo pacman -S qemu libvirt edk2-ovmf virt-manager iptables-nft dnsmasq");
            return s;
          }
          else if(sub_choice1 == 20){
            int all;
            all=system("sudo pacman -S $(cat packages)");
            int virt;
            virt=system("sudo pacman -S $(cat virtualisation)");
            return all;
            return virt;
          }
          else if(sub_choice1 == 21){
            int all;
            all=system("sudo pacman -S $(cat packages)");
            return all;
          }
          else if(sub_choice1 == 22){
            puts("Exiting");

          }
          else {
            puts("Invalid Choice");
          }
        }
        break;
      case 2:
        puts("Sub menu 2 was chosen");
        int sub_choice2 =0;
        while (sub_choice2 !=13){
          puts("/=========================/");
          puts("      CONFIG MANAGER       ");
          puts("1. configure libvirtd-net");
          puts("2. iommu grub configuration");
          puts("3. copy over bashrc");
          puts("4. mount iso");
          puts("5  define virt-manager configs");
          puts("6. copy qemu configuration");
          puts("7. set vfio-pci-override");
          puts("8. mkinitcpio.conf for AMD IOMMU");
          puts("9. copy over scripts");
          puts("10. set up mining rig");
          puts("11. Looking glass config");
          puts("12. AMD non tearing config");
          puts("13. Exit"); 
          puts("/=========================/");
          printf(">>");
          scanf("%d", &sub_choice2);
          if (sub_choice2 == 1){
            int a, b, c, d, e, f;
            a=system("sudo systemctl enable libvirtd.service");
            b=system("sudo systemctl start libvirtd.service");
            c=system("sudo systemctl start virtlogd.socket");
            d=system("sudo virsh net-start default");
            e=system("sudo sudo systemctl restart libvirtd");
            f=system("sudo virsh net-autostart default");
            return a;
            return b;
            return c;
            return d;
            return e;
            return f;
          }
          else if (sub_choice2 == 2){
            int a, b;
            a=system("sudo cp ./configurations/greeks_config/grubs/amd/grub /etc/default/grub");
            b=system("sudo grub-mkconfig -o /boot/grub/grub.cfg");
            return a;
            return b;
          }
          else if (sub_choice2 == 3){
            int a, b, c;
            a=system("sudo chsh -s /bin/bash");
            b=system("sudo chsh -s /bin/bash greek");
            c=system("sudo cp ./configurations/greeks_config/.bashrc /home/greek");
            return a;
            return b;
            return c;
          }
          else if (sub_choice2 == 4){
            int a, b, c;
            a=system("mkdir /home/greek/media");
            b=system("mkdir /home/greek/media/iso");
            c=system("sudo mount /dev/sda1 /home/greek/media/iso");
            return a;
            return b;
            return c;
          }
          else if (sub_choice2 == 5){
            int a, b, c;
            a=system("sudo virsh define ./configurations/greeks_config/virt-manager/win10.xml");
            b=system("sudo virsh define ./configurations/greeks_config/virt-manager/macOS.xml");
            c=system("sudo virsh define ./configurations/greeks_config/virt-manager/win11.xml");
            return a;
            return b;
            return c;
          }
          else if (sub_choice2 == 6){
            int a;
            a=system("sudo cp ./configurations/greeks_config/qemu.conf /etc/libvirt");
            return a;
          }
          else if (sub_choice2 == 7){
            int a, b;
            a=system("sudo cp ./configurations/greeks_config/vfio-pci-override.sh /usr/local/bin");
            b=system("sudo chmod +x /usr/local/bin/vfio-pci-override.sh");
            return a;
            return b;
          }
          else if (sub_choice2 == 8){
            int a, b;
            a=system("sudo cp ./configurations/greeks_config/mkinitcpio.conf /etc/");
            b=system("sudo mkinitcpio -p linux");
            return a;
            return b;
          }
          else if (sub_choice2 == 9){
            int a, b;
            a=system("sudo mkdir /home/greek/scripts");
            b=system("sudo cp ./configurations/greeks_config/scripts/* /home/greek/scripts");
            return a;
            return b;
          }
          else if (sub_choice2 == 10){
            int a, b;
            a=system("mkdir /home/greek/miner");
            b=system("sudo cp ./configurations/greeks_config/miner/* /home/greek/miner");
            return a;
            return b;
          }
          else if (sub_choice2 == 11){
            int a;
            a=system("sudo cp ./configurations/greeks_config/10-looking-glass.conf /etc/tmpfiles.d");
            return a;
          }
          else if (sub_choice2 == 12){
            int a;
            a=system("sudo cp ./configurations/greeks_config/20-amdgpu.conf /usr/share/X11/xorg.conf.d");
            return a;
          }
          else if (sub_choice2 == 13){
            puts("Exiting");
          }
          else{
            puts("Not a vaild choice");
          }
        }
        break;
      case 3:
        puts("Are you sure you want to exit?");
        break;
      default:
        puts("Invalid Option");
    }
  }
	return 0;
}
