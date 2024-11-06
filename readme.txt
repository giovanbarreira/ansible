In order to try locally instead in the server, there are two inventories, two playbooks and two uninstall_playbooks. Always one version for the server and another one for try locally.

To run the playbook for install the app on the server:
ansible-playbook -i inventory playbook.yml

To run the playbook for uninstall the app on the server:
ansible-playbook -i inventory uninstall_playbook.yml

To run the playbook for install the app on the wsl (locally):
ansible-playbook -i local_inventory local_playbook.yml

To run the playbook for uninstall the app on the wsl (locally):
ansible-playbook -i local_inventory local_unistall_playbook.yml

Test cases:
For install:
Check /usr/local/src/gen_calc/ for .c files and so on.
Check /usr/local/bin/gen_calc/ for the system files.
Run:
ls /usr/local/src/gen_calc/
ls /usr/local/bin/gen_calc/

For uninstall:
Check if /usr/local/src/gen_calc/ and /usr/local/bin/gen_calc/ was removed.
Run:
ls /usr/local/src/gen_calc/
ls /usr/local/bin/gen_calc/

