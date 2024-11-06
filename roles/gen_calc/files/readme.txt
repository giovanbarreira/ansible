**********************
** About Makefiles: **
**********************
Makefile_v01 is just for make.
Makefile_v02 is for make and for install.
Makefile_v03 is for make, install, and uninstall.
Makefile is a copy of Makefile_v03.


**********************
** About the calc:  **
**********************
gen_calc relies on sum_calc and sub_calc.


**********************
**About the install:**
**********************
The calc is installed on /usr/local/bin/gen_calc


**********************
**  How to install: **
**********************
Execute:
make
sudo make install
make clean


**********************
** How to uninstall: *
**********************
Execute:
sudo make uninstall


**********************
****    Alias     ****
**********************
export PATH=$PATH:/usr/local/bin/gen_calc

