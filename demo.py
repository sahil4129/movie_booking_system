import paramiko
host = "192.168.1.5"
port = 22
username = "sahil"
password = "1234"

command = "ls"

ssh = paramiko.SSHClient()
ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
ssh.connect(host, port, username, password)

stdin, stdout, stderr = ssh.exec_command(command)
lines = stdout.readlines()
print(lines)
