// Autogenerated file: do not modify

struct GL_t
{
	void	(APIENTRY * AlphaFunc) (GLenum func, GLclampf ref);
	void	(APIENTRY * Begin) (GLenum mode);
	void	(APIENTRY * BindTexture) (GLenum target, GLuint texture);
	void	(APIENTRY * BlendFunc) (GLenum sfactor, GLenum dfactor);
	void	(APIENTRY * Clear) (GLbitfield mask);
	void	(APIENTRY * ClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void	(APIENTRY * Color3f) (GLfloat red, GLfloat green, GLfloat blue);
	void	(APIENTRY * Color3fv) (const GLfloat *v);
	void	(APIENTRY * Color4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	void	(APIENTRY * ColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * CullFace) (GLenum mode);
	void	(APIENTRY * DeleteTextures) (GLsizei n, const GLuint *textures);
	void	(APIENTRY * DepthFunc) (GLenum func);
	void	(APIENTRY * DepthMask) (GLboolean flag);
	void	(APIENTRY * DepthRange) (GLclampd zNear, GLclampd zFar);
	void	(APIENTRY * Disable) (GLenum cap);
	void	(APIENTRY * DisableClientState) (GLenum array);
	void	(APIENTRY * DrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
	void	(APIENTRY * Enable) (GLenum cap);
	void	(APIENTRY * EnableClientState) (GLenum array);
	void	(APIENTRY * End) ();
	GLenum	(APIENTRY * GetError) ();
	const GLubyte *	(APIENTRY * GetString) (GLenum name);
	GLboolean	(APIENTRY * IsTexture) (GLuint texture);
	void	(APIENTRY * LightModeli) (GLenum pname, GLint param);
	void	(APIENTRY * Lightfv) (GLenum light, GLenum pname, const GLfloat *params);
	void	(APIENTRY * LineWidth) (GLfloat width);
	void	(APIENTRY * LoadIdentity) ();
	void	(APIENTRY * LoadMatrixf) (const GLfloat *m);
	void	(APIENTRY * Materialf) (GLenum face, GLenum pname, GLfloat param);
	void	(APIENTRY * Materialfv) (GLenum face, GLenum pname, const GLfloat *params);
	void	(APIENTRY * MatrixMode) (GLenum mode);
	void	(APIENTRY * Normal3fv) (const GLfloat *v);
	void	(APIENTRY * NormalPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * Ortho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	void	(APIENTRY * PolygonMode) (GLenum face, GLenum mode);
	void	(APIENTRY * ReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
	void	(APIENTRY * Rotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	void	(APIENTRY * Scissor) (GLint x, GLint y, GLsizei width, GLsizei height);
	void	(APIENTRY * ShadeModel) (GLenum mode);
	void	(APIENTRY * TexCoord2f) (GLfloat s, GLfloat t);
	void	(APIENTRY * TexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * TexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
	void	(APIENTRY * TexParameteri) (GLenum target, GLenum pname, GLint param);
	void	(APIENTRY * Vertex2f) (GLfloat x, GLfloat y);
	void	(APIENTRY * Vertex3f) (GLfloat x, GLfloat y, GLfloat z);
	void	(APIENTRY * Vertex3fv) (const GLfloat *v);
	void	(APIENTRY * VertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * Viewport) (GLint x, GLint y, GLsizei width, GLsizei height);

#if _WIN32


#endif

	void	(APIENTRY * AttachShader) (GLuint, GLuint);
	void	(APIENTRY * CompileShader) (GLuint);
	GLuint	(APIENTRY * CreateProgram) (void);
	GLuint	(APIENTRY * CreateShader) (GLenum);
	void	(APIENTRY * DeleteProgram) (GLuint);
	void	(APIENTRY * DeleteShader) (GLuint);
	void	(APIENTRY * DetachShader) (GLuint, GLuint);
	void	(APIENTRY * GetProgramiv) (GLuint, GLenum, GLint *);
	void	(APIENTRY * GetProgramInfoLog) (GLuint, GLsizei, GLsizei *, GLchar *);
	void	(APIENTRY * GetShaderiv) (GLuint, GLenum, GLint *);
	void	(APIENTRY * GetShaderInfoLog) (GLuint, GLsizei, GLsizei *, GLchar *);
	GLint	(APIENTRY * GetUniformLocation) (GLuint, const GLchar *);
	void	(APIENTRY * LinkProgram) (GLuint);
	void	(APIENTRY * ShaderSource) (GLuint, GLsizei, const GLchar* *, const GLint *);
	void	(APIENTRY * UseProgram) (GLuint);
	void	(APIENTRY * Uniform1i) (GLint, GLint);

#if _WIN32


#elif __linux__

#endif

};

extern GL_t GL;


#define glAlphaFunc	GL.AlphaFunc
#define glBegin	GL.Begin
#define glBindTexture	GL.BindTexture
#define glBlendFunc	GL.BlendFunc
#define glClear	GL.Clear
#define glClearColor	GL.ClearColor
#define glColor3f	GL.Color3f
#define glColor3fv	GL.Color3fv
#define glColor4f	GL.Color4f
#define glColorPointer	GL.ColorPointer
#define glCullFace	GL.CullFace
#define glDeleteTextures	GL.DeleteTextures
#define glDepthFunc	GL.DepthFunc
#define glDepthMask	GL.DepthMask
#define glDepthRange	GL.DepthRange
#define glDisable	GL.Disable
#define glDisableClientState	GL.DisableClientState
#define glDrawElements	GL.DrawElements
#define glEnable	GL.Enable
#define glEnableClientState	GL.EnableClientState
#define glEnd	GL.End
#define glGetError	GL.GetError
#define glGetString	GL.GetString
#define glIsTexture	GL.IsTexture
#define glLightModeli	GL.LightModeli
#define glLightfv	GL.Lightfv
#define glLineWidth	GL.LineWidth
#define glLoadIdentity	GL.LoadIdentity
#define glLoadMatrixf	GL.LoadMatrixf
#define glMaterialf	GL.Materialf
#define glMaterialfv	GL.Materialfv
#define glMatrixMode	GL.MatrixMode
#define glNormal3fv	GL.Normal3fv
#define glNormalPointer	GL.NormalPointer
#define glOrtho	GL.Ortho
#define glPolygonMode	GL.PolygonMode
#define glReadPixels	GL.ReadPixels
#define glRotatef	GL.Rotatef
#define glScissor	GL.Scissor
#define glShadeModel	GL.ShadeModel
#define glTexCoord2f	GL.TexCoord2f
#define glTexCoordPointer	GL.TexCoordPointer
#define glTexImage2D	GL.TexImage2D
#define glTexParameteri	GL.TexParameteri
#define glVertex2f	GL.Vertex2f
#define glVertex3f	GL.Vertex3f
#define glVertex3fv	GL.Vertex3fv
#define glVertexPointer	GL.VertexPointer
#define glViewport	GL.Viewport

#if _WIN32


#endif

#define glAttachShader	GL.AttachShader
#define glCompileShader	GL.CompileShader
#define glCreateProgram	GL.CreateProgram
#define glCreateShader	GL.CreateShader
#define glDeleteProgram	GL.DeleteProgram
#define glDeleteShader	GL.DeleteShader
#define glDetachShader	GL.DetachShader
#define glGetProgramiv	GL.GetProgramiv
#define glGetProgramInfoLog	GL.GetProgramInfoLog
#define glGetShaderiv	GL.GetShaderiv
#define glGetShaderInfoLog	GL.GetShaderInfoLog
#define glGetUniformLocation	GL.GetUniformLocation
#define glLinkProgram	GL.LinkProgram
#define glShaderSource	GL.ShaderSource
#define glUseProgram	GL.UseProgram
#define glUniform1i	GL.Uniform1i

#if _WIN32


#elif __linux__

#endif



#define QGL_2_0	(1 << 0)

#if _WIN32


#elif __linux__

#endif

