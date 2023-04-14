import socket
tcpsocket=socket.socket(socket.AF_INET , socket.SOCK_STREAM)
tcpsocket.bind(("0.0.0.0",8000))
tcpsocket.listen(2)
data = "hello world"
b_data = data.encode()
(client,(ip,port)) = tcpsocket.accept()
client.send(b_data)

