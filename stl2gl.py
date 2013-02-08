import sys
import getopt 

def processFile(name):
	
	try:
		fileOpened = open(name, "r")
	except IOError:
		print "Upps. File doesn't exist, sorry."
		sys.exit()
	
	file2write = open("opengl.cpp","w")	
	file2write.write("//Automatic generated code\n")
	file2write.write("//using stl2gl.py\n")
	file2write.write("//Github: https://github.com/mdblabs/stl2gl.git\n")
	file2write.write("//by mdbLabs --- htt://www.mdblabs.com\n")
	file2write.write("//A.Herrero and R.Azofra collaborations.\n")
	
	data=[""]

	while(data[0]!="endsolid"):
		data = fileOpened.readline()
		data = data.split()
		
		if (data[0] == "outer"): 
			file2write.write("glBegin(GL_POLYGON);\n")
			file2write.write("\tglColor3f(1.0f, 0.0f, 0.0f );\n")
			
		elif data[0] == "endloop" : 
			file2write.write("glEnd();\n")
		
		elif data[0] == "vertex":
			file2write.write("\tglVertex3f(")
			floatPointX = float(data[1])
			floatPointY = float(data[2])
			floatPointZ = float(data[3])
			file2write.write('%.5f'%floatPointX)
			file2write.write("f,")
			file2write.write('%.5f'%floatPointY)
			file2write.write("f,")
			file2write.write('%.5f'%floatPointZ)
			file2write.write("f);\n")			
			
	print "OpenGl code generated!"

def usage():
	print ""
	print "OpenGL code generator from STL file"
	print "by mdbLabs --- http://www.mdblabs.com"
	print "A.Herrero and R.Azofra collaborations."
	print "Github: https://github.com/mdblabs/stl2gl.git"
	print "---------------------------------------------"
	print""
	print "Usage: stl2gl.py [-f,--filename] name.stl [-h,--help]"
	print ""
	print " -f, --filename name.stl :  name.stl, STL filename to be used."
	print "- h, --help : mmm...help?"
	print ""
	print ""
	sys.exit()
	
def main(argv):
	try:
		opts,args = getopt.getopt(argv,"hf:",["help","filename="])
	
	except getopt.GetoptError:
		usage()
		sys.exit()
	
	for opt, arg in opts:
		if opt in ("-h","--help"):
			usage()
			sys.exit()
		elif opt in ("-f","--filename"):
			
			if len(argv) == 1:
				print "Introduce STL filename to be used. "
				sys.exit()
			else:
				filename = argv[1]				
				processFile(filename)
				sys.exit()
	
	if len(argv) == 0:
		usage()
		sys.exit()


if __name__ == "__main__":
    main(sys.argv[1:])






	