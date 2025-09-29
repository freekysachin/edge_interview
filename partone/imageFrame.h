#pragma once

class ImageFrame {
private:
    unsigned char* p_data;
    int m_width;
    int m_height;
    long long m_timestamp;

public:
    // --- Constructor ---
    ImageFrame(int width, int height) : m_width(width), m_height(height), p_data(nullptr);

    // --- Destructor ---
    ~ImageFrame();

    // Public getters for the FrameProcessor to use
    unsigned char* getData();
    int getWidth();
    int getHeight();
};
