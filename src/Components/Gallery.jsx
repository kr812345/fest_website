import React from 'react';
import { useEffect } from 'react';
import { FaArrowLeft } from 'react-icons/fa';

import bg from '/background.webp';
import bg2 from '/bg2.webp';
import pic1 from '/pic_1.webp';
import pic2 from '/pic_2.webp';
import pic7 from '/pic_3.webp';
import pic4 from '/pic_4.webp';
import pic5 from '/pic_5.webp';
import pic6 from '/pic_6.webp';
import pic3 from '/pic_7.webp';
import pic8 from '/pic_8.webp';
import poster_1 from '/poster_1.svg';
import GScroll from "@grcmichael/gscroll";
import pic9 from '/pic_9.webp';
import pic10 from '/pic_10.webp';
import pic11 from '/pic_11.webp';
import pic12 from '/pic_12.webp';
import pic13 from '/pic_13.webp';
import pic14 from '/pic_14.webp';
import pic15 from '/pic_15.webp';
import pic16 from '/pic_16.webp';
import pic17 from '/pic_17.webp';


const Gallery = () => {
    
    useEffect(() => {
        const scroll = new GScroll("#scroll-container");
        scroll.init();
        scroll.wheel();
    }, []);

    const images = [pic6,pic7,pic8,pic1,pic5,pic2,pic3,pic4,pic9,pic10,pic11,pic12,pic13,pic14,pic15,pic16,pic17];

    return (
        <div id='galleryMain' className='w-screen h-screen bg-transparent text-white'>
            <a href='/' className='fixed z-50 text-white scale-200 m-6'><FaArrowLeft /></a>
            <img src={bg} className='w-full h-full object-cover fixed -z-10' alt="" loading="lazy" />
            <div className='h-full w-full flex justify-center bg-[80%]'>
                <div id='scrollHta' className='h-screen w-3/5 not-sm:w-full p-4 overflow-y-scroll snap-center '>
                <h1 id='gallery-head' className='text-4xl ml-89 not-sm:mx-23 mt-5 not-sm:text-2xl'>Event Photos</h1>
                <div id='scroll-container' className='float-right clear-both h-[100vh] grid grid-cols-2 mt-10 gap-2 not-sm:grid-cols-1'>
                    {images.slice(3,).map((item,i)=>(
                        <div key={i} className='h-70 w-full bg-transparent rounded-md overflow-clip not-sm:h-54'>
                            <img className='object-contain' src={item} alt={item} loading="lazy" />
                    </div>
                    ))}
                    {images.slice(0,3).map((item,i)=>(
                        <div key={i} className='h-160 w-full bg-transparent rounded-md overflow-clip not-sm:h-122 not-sm:w-full'>
                            <img className='object-contain' src={item} alt={item} loading="lazy" />
                    </div>
                    ))}
                </div>
                </div>
            </div>
        </div>
    );
}

export default Gallery;
