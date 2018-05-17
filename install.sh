#!/bin/bash

#Colors
marin='\e[0;36m'
green='\e[0;32m'
lightgreen='\e[1;32m'
white='\e[1;37m'
red='\e[1;31m'
yellow='\e[1;33m'
blue='\e[1;34m'

echo ""
echo -e $yellow "                    [Silent Assassin Mail Valider]-V1.0                       "

# Ascii

echo -e $green "[============================================================================]"
echo -e $red "                                                                              "
echo -e $red "          ||'''\\\\\\        //\\\\\\         |\\\\\\    //|  [#]              [#]        "
echo -e $red "          ||   ||       //  \\\\\\        ||\\\\\\  //||   \\\\\\              //         "
echo -e $red "          ||   ||      //    \\\\\\       || \\\\\\// ||    \\\\\\            //          "
echo -e $red "          |\\\____      //------\\\\\\      ||      ||     \\\\\\          //           "
echo -e $red "           \___ \    //--------\\\\\\     ||      ||      \\\\\\        //            "
echo -e $red "               ||   //          \\\\\\    ||      ||       \\\\\\      //             "
echo -e $red "          ||   ||  //            \\\\\\   ||      ||        \\\\\\    //              "
echo -e $red "          ||___|| //              \\\\\\  ||      ||         \\\\\\  //               "
echo -e $red "          |_____|[0]              [0] \(      )/          \-//                "
echo -e $red "                                                                              "
echo -e $green "[============================================================================]"

echo ""
echo -e $white "STATUS: "
#Check root if exist
[[ `id -u` -eq 0 ]] > /dev/null 2>&1 || { echo  $red "[-] No Root Checked ,Please U Need To Be root "; exit 1; }

# Tool's Dirs
mkdir -p pkgs
echo -e $marin '[+] Complete of Files setup'

# Main Tool
g++ core/main.cpp -o samv
echo -e $marin '[+] Complete of Tool setup' 

# Tools
g++ core/one.cpp -o pkgs/one
g++ core/multi.cpp -o pkgs/multi
g++ core/file.cpp -o pkgs/file

echo -e $marin '[+] Complete of PKGS setup'

mkdir -p /usr/share/samv
cp -r pkgs /usr/share/samv
cp -r core /usr/share/samv 
cp samv /usr/share/samv
cp README.md /usr/share/samv

# Shortcut

echo -e $yellow "[*] optimizing..."

echo "#!/bin/bash" >> /usr/bin/samv
echo "cd /usr/share/samv" >> /usr/bin/samv
echo "exec ./samv" >> /usr/bin/samv
chmod 777 /usr/bin/samv

echo -e $red "###########################################"
echo -e $blue "  [!] Happy insatall, Type (samv) To run]  "
echo -e $red "###########################################"
exit
