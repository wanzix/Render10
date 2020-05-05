/*
	Copyright (c) 2011, T. Kroes <t.kroes@tudelft.nl>
	All rights reserved.

	Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

	- Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
	- Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
	- Neither the name of the <ORGANIZATION> nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
	
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

class QLight;

class QBackgroundWidget : public QGroupBox
{
    Q_OBJECT

public:
    QBackgroundWidget(QWidget* pParent = NULL);

	virtual QSize sizeHint() const { return QSize(10, 10); }

public slots:
	void OnBackgroundIlluminationChanged(bool Checked);
	void OnGradientColorTopChanged(const QColor& Color);
	void OnGradientColorMiddleChanged(const QColor& Color);
	void OnGradientColorBottomChanged(const QColor& Color);
	void OnIntensityChanged(double Intensity);
	void OnUseTextureChanged(int UseTexture);
	void OnLoadTexture(void);
	void OnBackgroundChanged(void);

protected:
	QGridLayout			m_MainLayout;
	QLabel				m_GradientColorTopLabel;
	QColorSelector		m_GradientColorTop;
	QLabel				m_GradientColorMiddleLabel;
	QColorSelector		m_GradientColorMiddle;
	QLabel				m_GradientColorBottomLabel;
	QColorSelector		m_GradientColorBottom;
	QLabel				m_IntensityLabel;
	QDoubleSlider		m_IntensitySlider;
	QDoubleSpinner		m_IntensitySpinner;
	QCheckBox			m_UseTexture;
	QLineEdit			m_TextureFilePath;
	QPushButton			m_LoadTexture;
};