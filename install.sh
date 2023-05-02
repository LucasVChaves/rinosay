#idk if this is safe, but it works
echo "Compiling the code"
g++ main.cpp -o rinosay
echo "Installing rinosay"
cp ./rinosay /usr/bin/
echo "Installed succesfully"
echo "type 'rinosay' for help"