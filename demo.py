import paramiko
paramiko.SSHClient().set_missing_host_key_policy(paramiko.AutoAddPolicy())
paramiko.SSHClient().connect("192.168.1.5",22, "sahil", "1234")
stdin, stdout, stderr = ssh.exec_command("ls")
lines = stdout.readlines()
print(lines)
